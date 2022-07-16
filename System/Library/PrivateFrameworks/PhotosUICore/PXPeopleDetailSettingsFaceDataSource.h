//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDetailSettingsDataSource-Protocol.h>

@class NSString, PHFetchResult;

@interface PXPeopleDetailSettingsFaceDataSource : NSObject <PXPeopleDetailSettingsDataSource>
{
    NSString *_title;	// 8 = 0x8
    PHFetchResult *_faces;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000054bb2a
@property(retain, nonatomic) PHFetchResult *faces; // @synthesize faces=_faces;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)modelObjectForIndex:(long long)arg1;	// IMP=0x000000000054baea
@property(readonly, nonatomic) long long action;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000054b86c
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000054b772
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) _Bool hasMoreDetails;
- (id)initWithTitle:(id)arg1 faces:(id)arg2;	// IMP=0x000000000054b6ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

