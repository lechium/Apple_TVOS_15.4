//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSObject-Protocol.h>

@class CKAsset, NSError, NSURL, PFCloudKitSerializer, PFMirroredRelationship;

@protocol PFCloudKitSerializerDelegate <NSObject>
- (NSURL *)cloudKitSerializer:(PFCloudKitSerializer *)arg1 safeSaveURLForAsset:(CKAsset *)arg2;
- (void)cloudKitSerializer:(PFCloudKitSerializer *)arg1 failedToUpdateRelationship:(PFMirroredRelationship *)arg2 withError:(NSError *)arg3;
@end

