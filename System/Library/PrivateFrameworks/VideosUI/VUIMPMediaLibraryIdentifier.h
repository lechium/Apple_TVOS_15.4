//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIMediaLibraryIdentifier-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier>
{
    NSString *_identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001139df
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000113762
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000113713
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001136a0
- (id)init;	// IMP=0x0000000000113631

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
