//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryResource-Protocol.h>

@class NSString;

@interface PXStoryConcreteResource : NSObject <PXStoryResource>
{
    NSString *_identifier;	// 8 = 0x8
    long long _kind;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000533eb9
@property(readonly, nonatomic) long long px_storyResourceKind; // @synthesize px_storyResourceKind=_kind;
@property(readonly, nonatomic) NSString *px_storyResourceIdentifier; // @synthesize px_storyResourceIdentifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000533e9a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000533d84
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2;	// IMP=0x0000000000533cb0
- (id)init;	// IMP=0x0000000000533c9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

