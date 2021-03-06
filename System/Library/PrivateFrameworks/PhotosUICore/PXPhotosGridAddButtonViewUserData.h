//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSString;

@interface PXPhotosGridAddButtonViewUserData : NSObject <PXGViewUserData>
{
    long long _style;	// 8 = 0x8
    CDUnknownBlockType _actionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000380c
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000037ed
- (id)init;	// IMP=0x0000000000003773
- (id)initWithStyle:(long long)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000036f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

