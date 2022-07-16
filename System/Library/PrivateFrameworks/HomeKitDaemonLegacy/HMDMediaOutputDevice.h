//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class AVOutputDevice, NSString;

@interface HMDMediaOutputDevice : HMFObject
{
    void *_outputDevice;	// 8 = 0x8
    NSString *_uniqueIdentifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000542574
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) void *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)shouldCreateAppleMediaAccessory;	// IMP=0x00000000005424ed
- (id)description;	// IMP=0x000000000054246f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054235f
- (unsigned long long)hash;	// IMP=0x0000000000542342
- (void)dealloc;	// IMP=0x00000000005422fc
@property(readonly, nonatomic) _Bool supportsHAP;
@property(readonly, nonatomic) _Bool supportsWHA;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) unsigned int deviceSubtype;
- (id)initWithOutputDevice:(void *)arg1;	// IMP=0x000000000054207d
@property(readonly) AVOutputDevice *av_OutputDevice;

@end

