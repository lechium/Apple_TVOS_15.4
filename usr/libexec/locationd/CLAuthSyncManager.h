//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@interface CLAuthSyncManager : CLIntersiloService
{
}

+ (_Bool)isSupported;	// IMP=0x0040000000378bd0
+ (id)getSilo;	// IMP=0x0010000000378b74
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000378b5b
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000378afe
- (id)init;	// IMP=0x0040000000378c61

@end
