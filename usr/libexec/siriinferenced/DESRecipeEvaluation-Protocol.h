//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class DESRecipe, DESRecipeEvaluationSession, DESRecordSet, NSArray, NSData, NSDictionary, NSURL;

@protocol DESRecipeEvaluation <NSObject>

@optional
- (void)performEvaluation:(DESRecipeEvaluationSession *)arg1;
- (NSDictionary *)evaluateRecipe:(DESRecipe *)arg1 matchingRecordSet:(DESRecordSet *)arg2 binaryResult:(id *)arg3 error:(id *)arg4;
- (NSDictionary *)evaluateRecipe:(DESRecipe *)arg1 matchingRecordSet:(DESRecordSet *)arg2 error:(id *)arg3;
- (NSDictionary *)serverSafeRecordInfoWithRecordInfo:(NSDictionary *)arg1;
- (_Bool)shouldDownloadAttachmentWithURL:(NSURL *)arg1 recipe:(NSDictionary *)arg2 recordInfo:(NSDictionary *)arg3;
- (NSDictionary *)telemetryWithRecordSet:(DESRecordSet *)arg1;
- (NSDictionary *)evaluateRecipe:(NSDictionary *)arg1 recordInfo:(NSDictionary *)arg2 recordData:(NSData *)arg3 attachments:(NSArray *)arg4 error:(id *)arg5;
@end

