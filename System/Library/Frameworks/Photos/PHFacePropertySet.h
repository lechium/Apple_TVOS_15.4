//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHFacePropertySet-Protocol.h>

@class NSString, PHFace;

@interface PHFacePropertySet : NSObject <PHFacePropertySet>
{
    PHFace *_face;	// 8 = 0x8
}

+ (id)propertiesToPrefetch;	// IMP=0x0000000000144033
+ (_Bool)isToMany;	// IMP=0x000000000014402b
+ (id)keyPathToPrimaryObject;	// IMP=0x000000000014401e
+ (id)keyPathFromPrimaryObject;	// IMP=0x0000000000144011
+ (id)entityName;	// IMP=0x0000000000144004
+ (id)propertiesToFetch;	// IMP=0x0000000000143ffc
+ (id)propertySetName;	// IMP=0x0000000000143fb8
- (void).cxx_destruct;	// IMP=0x0000000000143faa
@property(readonly, nonatomic) __weak PHFace *face; // @synthesize face=_face;
- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x0000000000143f86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

