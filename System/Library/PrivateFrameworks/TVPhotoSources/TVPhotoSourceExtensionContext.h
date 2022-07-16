//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <TVPhotoSources/TVPhotoSourceExtensionProtocol-Protocol.h>

@protocol TVPhotoSourceExtensionProtocol;

@interface TVPhotoSourceExtensionContext : NSExtensionContext <TVPhotoSourceExtensionProtocol>
{
    id <TVPhotoSourceExtensionProtocol> _protocolHandler;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00000000000080e8
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000007ec5
- (void).cxx_destruct;	// IMP=0x000000000000826e
@property(nonatomic) __weak id <TVPhotoSourceExtensionProtocol> protocolHandler; // @synthesize protocolHandler=_protocolHandler;
- (void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000081b1
- (void)fetchCollectionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008154

@end
