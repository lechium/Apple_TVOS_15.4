//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KGNodeFilter, MARelation;

@interface MANodeFilter
{
}

+ (id)nodeFilterWithVisualString:(id)arg1;	// IMP=0x00000000000c4b97
+ (_Bool)scanInstance:(out id *)arg1 withScanner:(id)arg2;	// IMP=0x00000000000c4af5
@property(readonly, nonatomic) MARelation *relation;
- (void)appendVisualStringToString:(id)arg1;	// IMP=0x00000000000c4a3c
@property(readonly, nonatomic) KGNodeFilter *kgNodeFilter;
- (_Bool)matchesNode:(id)arg1;	// IMP=0x00000000000c4956

@end

