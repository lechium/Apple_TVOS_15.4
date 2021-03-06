//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>
#import <MediaRemote/NSMutableCopying-Protocol.h>

@class MRTextEditingAttributes, NSString;

@interface MRTextEditingSession : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_text;	// 8 = 0x8
    _Bool _editing;	// 16 = 0x10
    MRTextEditingAttributes *_attributes;	// 24 = 0x18
    unsigned long long _uniqueIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000024119b
@property(readonly, nonatomic) MRTextEditingAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000241149
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002410c4
- (id)description;	// IMP=0x0000000000241047
- (id)init;	// IMP=0x0000000000241031
- (id)initWithText:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000240f69

@end

