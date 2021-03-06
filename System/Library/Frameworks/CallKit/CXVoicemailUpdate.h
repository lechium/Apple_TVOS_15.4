//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, NSDate, NSString, NSURL, NSUUID;

@interface CXVoicemailUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying>
{
    _Bool _played;	// 8 = 0x8
    _Bool _trashed;	// 9 = 0x9
    struct CXVoicemailUpdateHasSet _hasSet;	// 12 = 0xc
    NSUUID *_voicemailUUID;	// 16 = 0x10
    CXHandle *_sender;	// 24 = 0x18
    NSDate *_dateReceived;	// 32 = 0x20
    NSURL *_audioFileURL;	// 40 = 0x28
    NSUUID *_UUID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c630
- (void).cxx_destruct;	// IMP=0x000000000000cc83
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) struct CXVoicemailUpdateHasSet hasSet; // @synthesize hasSet=_hasSet;
@property(nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(copy, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(copy, nonatomic) CXHandle *sender; // @synthesize sender=_sender;
@property(readonly, copy, nonatomic) NSUUID *voicemailUUID; // @synthesize voicemailUUID=_voicemailUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c9ac
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c638
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c57c
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000000c56a
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c4b2
- (id)sanitizedCopy;	// IMP=0x000000000000c49e
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000000c246
@property(readonly, copy) NSString *description;
- (id)initWithVoicemailUUID:(id)arg1;	// IMP=0x000000000000be32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

