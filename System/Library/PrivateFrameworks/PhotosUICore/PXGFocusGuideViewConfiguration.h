//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSArray, NSString;

@interface PXGFocusGuideViewConfiguration : NSObject <PXGViewUserData>
{
    NSArray *_preferredFocusEnvironments;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001c8343
@property(retain, nonatomic) NSArray *preferredFocusEnvironments; // @synthesize preferredFocusEnvironments=_preferredFocusEnvironments;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c826a
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c81b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

