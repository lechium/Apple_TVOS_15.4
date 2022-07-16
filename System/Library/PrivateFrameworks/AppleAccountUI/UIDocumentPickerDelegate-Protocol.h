//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class NSArray, NSURL, UIDocumentPickerViewController;

@protocol UIDocumentPickerDelegate <NSObject>

@optional
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentAtURL:(NSURL *)arg2;
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)arg1;
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentsAtURLs:(NSArray *)arg2;
@end

