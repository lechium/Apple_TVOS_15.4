//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXInProcessCallSource, NSString;

@interface CXInProcessProvider
{
    CXInProcessCallSource *_callSource;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000048dd6
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak CXInProcessCallSource *callSource; // @synthesize callSource=_callSource;
- (id)hostProtocolDelegate;	// IMP=0x0000000000048d86
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000048d45
- (id)initWithConfiguration:(id)arg1 callSource:(id)arg2;	// IMP=0x0000000000048c52
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000048c44

@end

