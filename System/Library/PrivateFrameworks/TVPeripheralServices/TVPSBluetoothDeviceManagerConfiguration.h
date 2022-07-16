//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPeripheralServices/NSCopying-Protocol.h>
#import <TVPeripheralServices/NSMutableCopying-Protocol.h>

@class NSSet, NSString;
@protocol OS_dispatch_queue;

@interface TVPSBluetoothDeviceManagerConfiguration : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_label;	// 8 = 0x8
    NSSet *_deviceTypes;	// 16 = 0x10
    CDUnknownBlockType _deviceFilter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 32 = 0x20
    CDUnknownBlockType _filter;	// 40 = 0x28
}

+ (id)defaultConfiguration;	// IMP=0x0000000000005090
+ (id)appleTVRemotesConfiguration;	// IMP=0x0000000000004fe0
+ (id)gameControllersConfiguration;	// IMP=0x0000000000004f30
- (void).cxx_destruct;	// IMP=0x0000000000005480
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(copy, nonatomic) NSSet *deviceTypes; // @synthesize deviceTypes=_deviceTypes;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)description;	// IMP=0x00000000000051b0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005160
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005140
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000004d70
- (id)init;	// IMP=0x0000000000004c40

@end
