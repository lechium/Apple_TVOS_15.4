//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISOpenURLRequest;

@interface ISOpenURLOperation
{
    ISOpenURLRequest *_request;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005bc8d
- (_Bool)_openURL:(id)arg1;	// IMP=0x000000000005bad8
- (id)_newSortedTargetsArray;	// IMP=0x000000000005ba2b
- (void)run;	// IMP=0x000000000005b0ef
@property(readonly) ISOpenURLRequest *openURLRequest;
- (id)initWithOpenURLRequest:(id)arg1;	// IMP=0x000000000005af98
- (id)init;	// IMP=0x000000000005af84

@end

