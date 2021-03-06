//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TRDeviceSetupAction : NSObject
{
    NSString *_actionType;	// 8 = 0x8
    NSDictionary *_parameters;	// 16 = 0x10
}

+ (id)actionWithActionType:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000014c23
+ (id)actionWithData:(id)arg1 error:(id *)arg2 supportsLegacy:(_Bool)arg3;	// IMP=0x0000000000015dfa
- (void).cxx_destruct;	// IMP=0x0000000000014eb2
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) unsigned long long protocolVersion;
- (id)description;	// IMP=0x0000000000014dc2
- (id)propertyListRepresentation;	// IMP=0x0000000000014c8f
- (id)_initWithActionType:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000014b6a
- (id)init;	// IMP=0x0000000000014b54
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x0000000000016233

@end

