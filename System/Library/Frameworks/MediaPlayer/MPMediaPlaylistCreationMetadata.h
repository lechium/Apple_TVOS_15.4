//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPMediaPlaylistCreationMetadata : NSObject
{
    NSString *_defaultAuthorDisplayName;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_authorDisplayName;	// 24 = 0x18
    NSString *_descriptionText;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009f935
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *authorDisplayName; // @synthesize authorDisplayName=_authorDisplayName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1;	// IMP=0x000000000009f55f
- (id)init;	// IMP=0x000000000009f551

@end

