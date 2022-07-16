//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NAFuture, NSMutableSet;

@interface HFHomeAppInstallController : NSObject
{
    NAFuture *_activeHomeAppDownloadFuture;	// 8 = 0x8
    long long _lastReportedStatus;	// 16 = 0x10
    NSMutableSet *_statusUpdaters;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000016265d
- (void).cxx_destruct;	// IMP=0x00000000001627c6
@property(readonly, nonatomic) NSMutableSet *statusUpdaters; // @synthesize statusUpdaters=_statusUpdaters;
@property(nonatomic) long long lastReportedStatus; // @synthesize lastReportedStatus=_lastReportedStatus;
@property(retain, nonatomic) NAFuture *activeHomeAppDownloadFuture; // @synthesize activeHomeAppDownloadFuture=_activeHomeAppDownloadFuture;
- (id)downloadHomeAppWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000162774
@property(readonly, nonatomic) long long status; // @dynamic status;
- (_Bool)_isHomeAppInstalled;	// IMP=0x0000000000162733
- (id)init;	// IMP=0x00000000001626c3

@end

