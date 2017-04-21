//
//  NSMutableArray+ACY_NSSortDescriptorSorting.h
//  Pods
//
//  Created by Arthur Qiu on 19/04/2017.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray (ACY_NSSortDescriptorSorting)

- (void)acy_sortUsingKeys:(NSArray<NSString *> *)keys
				ascending:(BOOL)ascending;

@end

NS_ASSUME_NONNULL_END