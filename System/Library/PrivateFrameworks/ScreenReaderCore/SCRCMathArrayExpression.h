//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathArrayExpression
{
    NSArray *_children;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000010372
- (id)suffixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010313
- (id)prefixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000102b4
- (id)localizableSuffixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000102ac
- (id)localizablePrefixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000102a4
@property(readonly, nonatomic) NSArray *mathMLAttributes;
@property(readonly, nonatomic) NSString *mathMLTag;
- (_Bool)hasSimpleArrayOfChildren;	// IMP=0x000000000001028c
- (id)mathMLString;	// IMP=0x000000000001005b
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x000000000000fe4f
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;	// IMP=0x000000000000fd1e
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x000000000000faba
- (id)children;	// IMP=0x000000000000fa95
- (id)subExpressions;	// IMP=0x000000000000fa83
- (id)description;	// IMP=0x000000000000f9de
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000f74f

@end
