//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>

@interface SFResultEngagementFeedback <NSCopying>
{
    _Bool _actionEngaged;	// 32 = 0x20
    _Bool _matchesUnengagedSuggestion;	// 33 = 0x21
    unsigned long long _triggerEvent;	// 40 = 0x28
    unsigned long long _destination;	// 48 = 0x30
    unsigned long long _actionTarget;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000194c0c
@property(nonatomic) unsigned long long actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(nonatomic) _Bool matchesUnengagedSuggestion; // @synthesize matchesUnengagedSuggestion=_matchesUnengagedSuggestion;
@property(readonly, nonatomic) _Bool actionEngaged; // @synthesize actionEngaged=_actionEngaged;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000194a79
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000194977
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001948cb
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 actionTarget:(unsigned long long)arg4;	// IMP=0x0000000000194858
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3;	// IMP=0x00000000001947e8
- (id)initWithResult:(id)arg1 actionEngaged:(_Bool)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4;	// IMP=0x00000000001947d0

@end

