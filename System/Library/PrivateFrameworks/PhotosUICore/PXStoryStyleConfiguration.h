//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryStyleDescriptor-Protocol.h>

@class NSString;
@protocol PXStoryAutoEditDecisionList, PXStorySongResource;

@interface PXStoryStyleConfiguration : NSObject <PXStoryStyleDescriptor>
{
    _Bool _isCustomized;	// 8 = 0x8
    NSString *_originalColorGradeCategory;	// 16 = 0x10
    long long _customColorGradeKind;	// 24 = 0x18
    id <PXStorySongResource> _songResource;	// 32 = 0x20
    id <PXStoryAutoEditDecisionList> _autoEditDecisionList;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007bf147
@property(readonly, nonatomic) _Bool isCustomized; // @synthesize isCustomized=_isCustomized;
@property(readonly, nonatomic) id <PXStoryAutoEditDecisionList> autoEditDecisionList; // @synthesize autoEditDecisionList=_autoEditDecisionList;
@property(readonly, nonatomic) id <PXStorySongResource> songResource; // @synthesize songResource=_songResource;
@property(readonly, nonatomic) long long customColorGradeKind; // @synthesize customColorGradeKind=_customColorGradeKind;
@property(readonly, nonatomic) NSString *originalColorGradeCategory; // @synthesize originalColorGradeCategory=_originalColorGradeCategory;
@property(readonly, nonatomic) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007bee69
- (id)description;	// IMP=0x00000000007bed3f
- (id)copyWithAutoEditDecisionList:(id)arg1;	// IMP=0x00000000007bec64
- (id)copyWithCustomizedSongResource:(id)arg1;	// IMP=0x00000000007beb9a
- (id)copyWithCustomizedColorGradeKind:(long long)arg1;	// IMP=0x00000000007bead4
- (id)initWithOriginalColorGradeCategory:(id)arg1 customColorGradeKind:(long long)arg2 songResource:(id)arg3 autoEditDecisionList:(id)arg4 isCustomized:(_Bool)arg5;	// IMP=0x00000000007be9fd
- (id)init;	// IMP=0x00000000007be9d1

@end

