//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSSecurityScopedURLWrapper, NSURL;
@protocol NSSecureCoding;

@interface WFFileStorageServiceResult : NSObject <NSSecureCoding>
{
    NSSecurityScopedURLWrapper *_wrappedURL;	// 8 = 0x8
    id <NSSecureCoding> _metadataObject;	// 16 = 0x10
    NSURL *_lifecycleManagedURL;	// 24 = 0x18
}

+ (id)possibleMetadataClasses;	// IMP=0x000000000018d4a9
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018d4a1
+ (id)resultWithMetadata:(id)arg1;	// IMP=0x000000000018d3d2
+ (void)getResultWithFileURL:(id)arg1 consumingBundleID:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000018d2d9
- (void).cxx_destruct;	// IMP=0x000000000018d2a6
@property(readonly, nonatomic) NSURL *lifecycleManagedURL; // @synthesize lifecycleManagedURL=_lifecycleManagedURL;
@property(readonly, nonatomic) id <NSSecureCoding> metadataObject; // @synthesize metadataObject=_metadataObject;
@property(readonly, nonatomic) NSSecurityScopedURLWrapper *wrappedURL; // @synthesize wrappedURL=_wrappedURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018d1a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018d0f3
- (void)dealloc;	// IMP=0x000000000018d05c
- (id)initWithFileURL:(id)arg1 metadataObject:(id)arg2;	// IMP=0x000000000018cf03
- (id)initWithWrappedURL:(id)arg1 metadataObject:(id)arg2;	// IMP=0x000000000018cdd6

@end

