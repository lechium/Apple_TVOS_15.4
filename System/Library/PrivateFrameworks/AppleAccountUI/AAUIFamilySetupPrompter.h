//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AAUIFamilySetupPrompterDelegate;

@interface AAUIFamilySetupPrompter : NSObject
{
    id <AAUIFamilySetupPrompterDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000250fe
@property(nonatomic) __weak id <AAUIFamilySetupPrompterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(_Bool)arg2;	// IMP=0x00000000000250d1
- (id)initWithiTunesAccount:(id)arg1;	// IMP=0x00000000000250bf
- (id)init;	// IMP=0x0000000000025090

@end

