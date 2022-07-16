//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@interface _SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding>
{
    struct SWCSubstitutionVariable _variables[0];	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006550
+ (id)substitutionVariableListWithDictionary:(id)arg1;	// IMP=0x0000000000005654
+ (id)expensiveBuiltInSubstitutionVariableList;	// IMP=0x0000000000005037
+ (id)cheapBuiltInSubstitutionVariableList;	// IMP=0x0000000000004c09
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000066af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006558
- (id)redactedDescription;	// IMP=0x0000000000006537
- (id)debugDescription;	// IMP=0x000000000000651e
- (id)description;	// IMP=0x0000000000006508
- (unsigned long long)hash;	// IMP=0x00000000000064b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000063ed
- (id)_descriptionDebug:(_Bool)arg1 redacted:(_Bool)arg2;	// IMP=0x00000000000060f1
- (void)enumerateSubstitutionVariablesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006024
@property(readonly) unsigned long long count;

@end

