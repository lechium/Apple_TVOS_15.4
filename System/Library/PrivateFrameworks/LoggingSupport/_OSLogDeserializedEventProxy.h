//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, _OSLogEventSerializationMetadata;

__attribute__((visibility("hidden")))
@interface _OSLogDeserializedEventProxy
{
    _Bool _unixDateNeedsLookup;	// 8 = 0x8
    _Bool _unixTimeZoneNeedsLookup;	// 9 = 0x9
    struct timezone _unixTimeZone;	// 12 = 0xc
    struct timeval _unixDate;	// 24 = 0x18
    _Bool _lossStartUnixDateNeedsLookup;	// 40 = 0x28
    _Bool _lossStartUnixTimeZoneNeedsLookup;	// 41 = 0x29
    struct timeval _lossStartUnixDate;	// 48 = 0x30
    struct timezone _lossStartUnixTimeZone;	// 64 = 0x40
    _Bool _lossEndUnixDateNeedsLookup;	// 72 = 0x48
    _Bool _lossEndUnixTimeZoneNeedsLookup;	// 73 = 0x49
    struct timeval _lossEndUnixDate;	// 80 = 0x50
    struct timezone _lossEndUnixTimeZone;	// 96 = 0x60
    _Bool _needsTypeLookup;	// 104 = 0x68
    NSDictionary *_curEventDictionary;	// 112 = 0x70
    _OSLogEventSerializationMetadata *_metadata;	// 120 = 0x78
    unsigned long long _type;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000454eb
@property(nonatomic) _Bool needsTypeLookup; // @synthesize needsTypeLookup=_needsTypeLookup;
@property(retain, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSDictionary *curEventDictionary; // @synthesize curEventDictionary=_curEventDictionary;
- (id)decomposedMessage;	// IMP=0x0000000000045329
- (id)backtrace;	// IMP=0x0000000000044f28
- (id)_frameForDict:(id)arg1;	// IMP=0x0000000000044cd7
- (CDStruct_0dd72924)lossCount;	// IMP=0x0000000000044b44
- (struct timezone *)lossEndUnixTimeZone;	// IMP=0x00000000000449f3
- (struct timeval *)lossEndUnixDate;	// IMP=0x00000000000448a2
- (struct timezone *)lossStartUnixTimeZone;	// IMP=0x0000000000044751
- (struct timeval *)lossStartUnixDate;	// IMP=0x0000000000044600
- (id)timeZone;	// IMP=0x0000000000044543
- (id)date;	// IMP=0x0000000000044484
- (struct timezone *)unixTimeZone;	// IMP=0x00000000000442fa
- (struct timeval *)unixDate;	// IMP=0x0000000000044170
- (void)_populate_timezone:(struct timezone *)arg1 withDict:(id)arg2;	// IMP=0x0000000000044014
- (void)_populate_timeval:(struct timeval *)arg1 withDict:(id)arg2;	// IMP=0x0000000000043ec9
- (id)bootUUID;	// IMP=0x0000000000043d3f
- (const char *)senderImageUUIDBytes;	// IMP=0x0000000000043c36
- (id)senderImageUUID;	// IMP=0x0000000000043b0d
- (const char *)processImageUUIDBytes;	// IMP=0x0000000000043a04
- (id)processImageUUID;	// IMP=0x00000000000438db
- (id)signpostName;	// IMP=0x0000000000043716
- (id)formatString;	// IMP=0x0000000000043523
- (id)category;	// IMP=0x0000000000043344
- (id)subsystem;	// IMP=0x0000000000043165
- (id)sender;	// IMP=0x0000000000042fbe
- (id)senderImagePath;	// IMP=0x0000000000042e17
- (id)process;	// IMP=0x0000000000042c70
- (id)processImagePath;	// IMP=0x0000000000042ac9
- (id)composedMessage;	// IMP=0x0000000000042922
- (int)processIdentifier;	// IMP=0x0000000000042822
- (unsigned long long)lossEndMachContinuousTimestamp;	// IMP=0x0000000000042705
- (unsigned long long)lossStartMachContinuousTimestamp;	// IMP=0x00000000000425e8
- (unsigned long long)creatorProcessUniqueIdentifier;	// IMP=0x00000000000424cb
- (unsigned long long)creatorActivityIdentifier;	// IMP=0x00000000000423ae
- (unsigned long long)signpostScope;	// IMP=0x0000000000042291
- (unsigned long long)signpostType;	// IMP=0x0000000000042174
- (unsigned long long)signpostIdentifier;	// IMP=0x0000000000042073
- (unsigned long long)senderImageOffset;	// IMP=0x0000000000041f72
- (unsigned long long)machContinuousTimestamp;	// IMP=0x0000000000041e71
- (unsigned long long)continuousNanosecondsSinceBoot;	// IMP=0x0000000000041d70
- (unsigned long long)transitionActivityIdentifier;	// IMP=0x0000000000041c6f
- (unsigned long long)parentActivityIdentifier;	// IMP=0x0000000000041b6e
- (unsigned long long)activityIdentifier;	// IMP=0x0000000000041a6d
- (unsigned long long)threadIdentifier;	// IMP=0x000000000004196c
- (unsigned long long)traceIdentifier;	// IMP=0x000000000004186b
- (unsigned long long)timeToLive;	// IMP=0x000000000004176a
- (unsigned long long)size;	// IMP=0x0000000000041669
- (unsigned long long)logType;	// IMP=0x0000000000041568
- (unsigned long long)type;	// IMP=0x00000000000413d4
- (void)_resetNeedsLookup;	// IMP=0x0000000000041343

@end

