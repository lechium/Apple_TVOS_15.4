//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIKeyboardKeyplaneTransformation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBContinuousPathModalKeysTransformation : NSObject <UIKeyboardKeyplaneTransformation>
{
}

+ (id)transformationIdentifier;	// IMP=0x00000000009d7838
+ (id)rollbackKeyplane:(id)arg1 withTransformationContext:(id)arg2;	// IMP=0x00000000009d76a1
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;	// IMP=0x00000000009d72bc
+ (id)_donorControlKeysForLastDisplayRowForKeyplane:(id)arg1 transformationContext:(id)arg2;	// IMP=0x00000000009d7097
+ (id)_donorKeyplaneForKeyplane:(id)arg1 transformationContext:(id)arg2;	// IMP=0x00000000009d6ff5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

