#ifndef INSTALLDIALOG_H
#define INSTALLDIALOG_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>

namespace Ui {
class InstallDialog;
}

class InstallDialog : public QDialog
{
	Q_OBJECT

public:
	explicit InstallDialog(QWidget *parent = 0);
	~InstallDialog();

private slots:
	void on_networkReply(QNetworkReply *reply);
	void on_InstallDialog_rejected();
	void on_cancelButton_clicked();
	void on_downloadProgress(qint64 bytesReceived,qint64 bytesTotal);

private:
	Ui::InstallDialog *ui;
	QNetworkAccessManager *nam;
};

#endif // INSTALLDIALOG_H
