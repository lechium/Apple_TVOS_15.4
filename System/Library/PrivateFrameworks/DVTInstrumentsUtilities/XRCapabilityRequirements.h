//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XRCapabilityRequirements : NSObject
{
    NSMutableDictionary *_capabilities;	// 8 = 0x8
    NSMutableDictionary *_unimplementedResponses;	// 16 = 0x10
}

+ (id)requirementsFromPlist:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015af4
+ (id)requirementsFromContext:(id)arg1;	// IMP=0x000000000001596f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015967
- (void).cxx_destruct;	// IMP=0x0000000000017053
- (_Bool)checkRequirementsAgainstRegistery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001675d
- (id)plistRepresentation;	// IMP=0x0000000000016494
- (id)init;	// IMP=0x000000000001641f

@end

