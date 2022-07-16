//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryRepresentableItem-Protocol.h>

@class NSString;
@protocol HFHomeKitObject;

@interface HFAccessoryRepresentableTransformItem <HFAccessoryRepresentableItem>
{
}

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000001cdd4e
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)accessoryRepresentableObject;	// IMP=0x00000000001cdd56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
