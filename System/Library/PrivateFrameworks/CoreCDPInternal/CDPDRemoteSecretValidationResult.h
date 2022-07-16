//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPDevice, NSDictionary, NSString, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject
{
    _Bool _userDidCancel;	// 8 = 0x8
    _Bool _userDidReset;	// 9 = 0x9
    unsigned long long _secretType;	// 16 = 0x10
    CDPDevice *_device;	// 24 = 0x18
    NSString *_validSecret;	// 32 = 0x20
    NSDictionary *_recoveredInfo;	// 40 = 0x28
    OTClique *_recoveredClique;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000440f
@property(retain, nonatomic) OTClique *recoveredClique; // @synthesize recoveredClique=_recoveredClique;
@property(copy, nonatomic) NSDictionary *recoveredInfo; // @synthesize recoveredInfo=_recoveredInfo;
@property(copy, nonatomic) NSString *validSecret; // @synthesize validSecret=_validSecret;
@property(copy, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool userDidReset; // @synthesize userDidReset=_userDidReset;
@property(nonatomic) _Bool userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property(nonatomic) unsigned long long secretType; // @synthesize secretType=_secretType;

@end
