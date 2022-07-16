//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSServiceMonitor : NSObject
{
    long long _availability;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    int _token;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001047ba
- (id)description;	// IMP=0x000000000010473d
@property(readonly, nonatomic) NSString *service;
- (long long)serviceAvailability;	// IMP=0x0000000000104725
- (void)updateAvailability;	// IMP=0x00000000001046c0
- (void)_updateAvailability;	// IMP=0x00000000001045bc
- (void)_postAvailability:(long long)arg1;	// IMP=0x00000000001044f8
- (void)dealloc;	// IMP=0x0000000000104434
- (id)initWithService:(id)arg1;	// IMP=0x0000000000104149

@end
