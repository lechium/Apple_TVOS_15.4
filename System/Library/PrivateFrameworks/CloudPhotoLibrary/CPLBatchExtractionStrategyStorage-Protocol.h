//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class CPLRecordChange, CPLScopedIdentifier, NSString;
@protocol NSFastEnumeration;

@protocol CPLBatchExtractionStrategyStorage <NSObject>
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(NSString *)arg1;
- (_Bool)hasChangesInScopeWithIdentifier:(NSString *)arg1;
- (_Bool)removeChange:(CPLRecordChange *)arg1 error:(id *)arg2;
- (id <NSFastEnumeration>)allChangesWithScopeIdentifier:(NSString *)arg1;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(CPLScopedIdentifier *)arg2;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(CPLScopedIdentifier *)arg2;
- (id <NSFastEnumeration>)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 changeType:(unsigned long long)arg3;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 trashed:(_Bool)arg3;
- (CPLRecordChange *)changeWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
@end
