//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLSidecar-Protocol.h>

@class NSDate, NSManagedObjectID, NSNumber, NSString, NSURL, PLInternalResource, PLManagedAsset;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar>
{
    PLInternalResource *_resource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000030d52a
@property(nonatomic) __weak PLInternalResource *resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *originalFilename;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) unsigned long long compressedSizeValue;
@property(readonly, nonatomic) short indexValue;
@property(nonatomic) long long ptpTrashedState;
@property(readonly, nonatomic) NSNumber *index;
@property(readonly, nonatomic) PLManagedAsset *asset;
@property(readonly, nonatomic) NSNumber *compressedSize;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *captureDate;
- (id)initWithResource:(id)arg1;	// IMP=0x000000000030c977
- (id)extension;	// IMP=0x000000000030c655

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

