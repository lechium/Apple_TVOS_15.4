//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKNFCTagReaderSession;

@protocol PKNFCTagReaderSessionDelegate <NSObject>

@optional
- (void)nfcTagReaderSessionDidTimeout:(PKNFCTagReaderSession *)arg1;
- (void)nfcTagReaderSessionDidEndUnexpectedly:(PKNFCTagReaderSession *)arg1;
- (void)nfcTagReaderSession:(PKNFCTagReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
@end

