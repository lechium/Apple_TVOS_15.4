//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Koa/NSObject-Protocol.h>

@class KVDonateVersionLog, NSObject, NSString;
@protocol KVDonateService;

@protocol KVDonateServiceProvider <NSObject>
- (KVDonateVersionLog *)versionLog;
- (NSObject<KVDonateService> *)makeConnection:(NSString *)arg1;
@end

