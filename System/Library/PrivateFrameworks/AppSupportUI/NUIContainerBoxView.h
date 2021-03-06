//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/_NUIBoxArrangementContainer-Protocol.h>
#import <AppSupportUI/_UIMultilineTextContentSizing-Protocol.h>

@class NSString;

@interface NUIContainerBoxView <_NUIBoxArrangementContainer, _UIMultilineTextContentSizing>
{
    struct _NUIBoxArrangement _arrangement;	// 16 = 0x10
    CDStruct_e0b918f9 _boxFlags;	// 128 = 0x80
}

+ (id)containerBoxViewWithArrangedSubviews:(id)arg1;	// IMP=0x000000000001e288
- (id).cxx_construct;	// IMP=0x000000000001f121
- (void).cxx_destruct;	// IMP=0x000000000001f0df
- (id)debugDictionary;	// IMP=0x000000000001eec1
- (id)arrangedDebugDescription;	// IMP=0x000000000001eb49
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;	// IMP=0x000000000001eaee
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000001eaad
- (_Bool)setNeedsInvalidation:(long long)arg1;	// IMP=0x000000000001ea57
- (void)populateBoxArrangementCells:(void *)arg1;	// IMP=0x000000000001e824
- (id)calculateViewForLastBaselineLayout;	// IMP=0x000000000001e69c
- (id)calculateViewForFirstBaselineLayout;	// IMP=0x000000000001e521
@property(nonatomic) long long verticalAlignment;
@property(nonatomic) long long horizontalAlignment;
- (void)dealloc;	// IMP=0x000000000001e3ce
- (id)initWithArrangedSubviews:(id)arg1;	// IMP=0x000000000001e38f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001e33f
- (_Bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;	// IMP=0x000000000001e2b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

