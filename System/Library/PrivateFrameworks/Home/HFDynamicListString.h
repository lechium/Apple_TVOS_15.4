//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFStringGenerator-Protocol.h>

@class NSArray, NSString;

@interface HFDynamicListString : NSObject <HFStringGenerator>
{
    NSArray *_stringList;	// 8 = 0x8
    NSString *_truncationFormat;	// 16 = 0x10
    NSString *_summaryFormat;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000243453
@property(copy, nonatomic) NSString *summaryFormat; // @synthesize summaryFormat=_summaryFormat;
@property(copy, nonatomic) NSString *truncationFormat; // @synthesize truncationFormat=_truncationFormat;
@property(copy, nonatomic) NSArray *stringList; // @synthesize stringList=_stringList;
- (id)attributeStringsSortedBySize:(id)arg1;	// IMP=0x0000000000243235
- (_Bool)prefersDynamicString;	// IMP=0x000000000024322d
- (id)stringWithAttributes:(id)arg1;	// IMP=0x0000000000243138
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;	// IMP=0x000000000024295f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002428ab
- (id)initWithList:(id)arg1 truncationFormat:(id)arg2 summaryFormat:(id)arg3;	// IMP=0x00000000002427f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

