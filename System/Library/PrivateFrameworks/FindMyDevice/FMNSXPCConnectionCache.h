//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FMNSXPCConnectionCache : NSObject
{
    NSObject<OS_dispatch_queue> *_modsSerialQueue;	// 8 = 0x8
    NSMutableDictionary *_connectionsByServiceName;	// 16 = 0x10
}

+ (id)sharedCache;	// IMP=0x00000000000089a6
- (void).cxx_destruct;	// IMP=0x00000000000091b4
@property(retain, nonatomic) NSMutableDictionary *connectionsByServiceName; // @synthesize connectionsByServiceName=_connectionsByServiceName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modsSerialQueue; // @synthesize modsSerialQueue=_modsSerialQueue;
- (id)resumeConnectionWithConfiguration:(id)arg1;	// IMP=0x0000000000008baa
- (void)dealloc;	// IMP=0x0000000000008a82
- (id)init;	// IMP=0x00000000000089fb

@end

