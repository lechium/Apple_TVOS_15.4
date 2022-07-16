//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIMediaEntityIdentifierInternal-Protocol.h>

@class NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>
{
    NSString *_identifier;	// 8 = 0x8
    VUIMediaEntityType *_mediaEntityType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000021bc5
@property(copy, nonatomic) VUIMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002192f
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000218e0
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000021787
- (id)init;	// IMP=0x0000000000021718

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

