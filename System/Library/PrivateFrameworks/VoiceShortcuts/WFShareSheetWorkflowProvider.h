//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WFDatabaseProvider;

@interface WFShareSheetWorkflowProvider : NSObject
{
    id <WFDatabaseProvider> _databaseProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000548ec
@property(readonly, nonatomic) id <WFDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
- (id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1;	// IMP=0x00000000000547b9
- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000054068
- (id)initWithDatabaseProvider:(id)arg1;	// IMP=0x0000000000053f90

@end

