//
//  SYUncaughtExceptionHandler.h
//  CrashCaptureDemo
//
//  Created by Mac on 2022/11/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYUncaughtExceptionHandler : NSObject
+ (void)redirectNSLogToDocumentFolder;
@end
void InstallSYUncaughtExceptionHandler(void);


NS_ASSUME_NONNULL_END
