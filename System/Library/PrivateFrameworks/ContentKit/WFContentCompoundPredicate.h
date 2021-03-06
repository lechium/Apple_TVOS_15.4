//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentPropertyContainer-Protocol.h>

@class NSArray, NSSet;

@interface WFContentCompoundPredicate <WFContentPropertyContainer>
{
    unsigned long long _compoundPredicateType;	// 16 = 0x10
    NSArray *_subpredicates;	// 24 = 0x18
}

+ (id)notPredicateWithSubpredicate:(id)arg1;	// IMP=0x000000000007e4d7
+ (id)orPredicateWithSubpredicates:(id)arg1;	// IMP=0x000000000007e489
+ (id)andPredicateWithSubpredicates:(id)arg1;	// IMP=0x000000000007e43b
- (void).cxx_destruct;	// IMP=0x000000000007e250
@property(readonly, copy) NSArray *subpredicates; // @synthesize subpredicates=_subpredicates;
@property(readonly) unsigned long long compoundPredicateType; // @synthesize compoundPredicateType=_compoundPredicateType;
@property(readonly, nonatomic) NSSet *containedProperties;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007dcd8
- (id)description;	// IMP=0x000000000007dbe7
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;	// IMP=0x000000000007db48

@end

