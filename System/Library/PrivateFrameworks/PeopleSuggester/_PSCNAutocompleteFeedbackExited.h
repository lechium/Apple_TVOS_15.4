//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@interface _PSCNAutocompleteFeedbackExited : NSObject <NSSecureCoding>
{
    long long _exitStatus;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027b2a
@property(readonly, nonatomic) long long exitStatus; // @synthesize exitStatus=_exitStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027b07
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027a80
- (id)initWithExitStatus:(long long)arg1;	// IMP=0x0000000000027a43

@end

