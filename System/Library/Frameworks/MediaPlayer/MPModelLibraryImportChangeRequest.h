//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelObject, MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying>
{
    _Bool _shouldLibraryAdd;	// 8 = 0x8
    MPModelObject *_referralObject;	// 16 = 0x10
    MPSectionedCollection *_modelObjects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f1c24
@property(nonatomic) _Bool shouldLibraryAdd; // @synthesize shouldLibraryAdd=_shouldLibraryAdd;
@property(copy, nonatomic) MPSectionedCollection *modelObjects; // @synthesize modelObjects=_modelObjects;
@property(copy, nonatomic) MPModelObject *referralObject; // @synthesize referralObject=_referralObject;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f1b62
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f1afa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f1aaf

@end

