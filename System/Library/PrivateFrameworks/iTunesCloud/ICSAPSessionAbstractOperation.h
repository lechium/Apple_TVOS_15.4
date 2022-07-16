//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSAPSession;

__attribute__((visibility("hidden")))
@interface ICSAPSessionAbstractOperation
{
    ICSAPSession *_sapSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014d952
@property(retain, nonatomic) ICSAPSession *sapSession; // @synthesize sapSession=_sapSession;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000014d8fe
- (void)finishWithSAPContextPreparationError:(id)arg1;	// IMP=0x000000000014d8f8
- (void)executeWithSAPContext:(id)arg1;	// IMP=0x000000000014d8f2
- (void)execute;	// IMP=0x000000000014d79c

@end
