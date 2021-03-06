//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, NSDate, NSString, NSURL, NSUUID;

@interface CXVoicemail : NSObject <NSSecureCoding, CXCopying>
{
    _Bool _played;	// 8 = 0x8
    _Bool _trashed;	// 9 = 0x9
    NSUUID *_UUID;	// 16 = 0x10
    CXHandle *_sender;	// 24 = 0x18
    NSDate *_dateReceived;	// 32 = 0x20
    NSURL *_audioFileURL;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000046476
- (void).cxx_destruct;	// IMP=0x00000000000470c0
@property(nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(copy, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(copy, nonatomic) CXHandle *sender; // @synthesize sender=_sender;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046fbb
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000046e9d
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000046e97
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046e8f
- (id)sanitizedCopy;	// IMP=0x0000000000046e7b
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToVoicemail:(id)arg1;	// IMP=0x0000000000046b09
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046aac
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000466a9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004647e
- (id)initWithUUID:(id)arg1;	// IMP=0x000000000004640b
- (id)init;	// IMP=0x00000000000463fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

