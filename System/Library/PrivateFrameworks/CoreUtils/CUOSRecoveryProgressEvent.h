//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CUOSRecoveryProgressEvent : NSObject
{
    int _type;	// 8 = 0x8
    NSString *_authenticationText;	// 16 = 0x10
    NSDictionary *_configInfo;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000805a8
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(copy, nonatomic) NSString *authenticationText; // @synthesize authenticationText=_authenticationText;

@end

