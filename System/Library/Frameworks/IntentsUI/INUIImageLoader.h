//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IntentsUI/INImageLoading-Protocol.h>
#import <IntentsUI/SFResourceLoader-Protocol.h>

@class NSString;
@protocol INUIImageLoaderDelegate;

@interface INUIImageLoader : NSObject <SFResourceLoader, INImageLoading>
{
    id <INUIImageLoaderDelegate> _delegate;	// 8 = 0x8
}

+ (id)registeredImageLoaderWithScreenDelegate;	// IMP=0x000000000000673e
- (void).cxx_destruct;	// IMP=0x0000000000006306
@property(nonatomic) __weak id <INUIImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long servicePriority;
- (_Bool)canLoadImageDataForImage:(id)arg1;	// IMP=0x00000000000062d9
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(CDStruct_c3b9c2ee)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005c9e
@property(readonly, nonatomic) NSString *serviceIdentifier;
- (_Bool)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000058f3
- (void)dealloc;	// IMP=0x000000000000584c
- (void)deregisterWithIntents;	// IMP=0x00000000000057f9
- (void)deregisterWithSearchFoundation;	// IMP=0x00000000000057ef
- (void)registerWithSearchFoundation;	// IMP=0x00000000000057e5
- (void)registerWithIntents;	// IMP=0x0000000000005792

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

