//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/NSObject-Protocol.h>

@class NSError;

@protocol MFObserver <NSObject>
- (void)observerDidFailWithError:(NSError *)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
@end

